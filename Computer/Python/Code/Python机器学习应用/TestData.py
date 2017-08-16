import numpy as np
import sklearn.cluster as skc
from sklearn import metrics
import matplotlib.pyplot as plt 
from sklearn.cluster import DBSCAN

mac2id = dict()
onlinetimes = []
f = open('TestData.txt', encoding = 'utf-8')
for line in f:
	mac = line.split(',')[2]
	onlinetime = int(line.split(',')[6])
	starttime = int(line.split(',')[4].split(' ')[1].split(':')[0])
	if mac not in mac2id:
		mac2id[mac] = len(onlinetimes)
		onlinetimes.append((starttime, onlinetime))
	else:
		onlinetimes[mac2id[mac]] = [(starttime, onlinetime)]

real_X = np.array(onlinetimes).reshape((-1, 2))#以二维数组方式存放开始时间和上网时长

#调用DBSCAN方法进行训练，labels为每个数据的簇标签
X = real_X[:,0:1]#第一维取全部数据，第二位取第一个数据

db = skc.DBSCAN(eps = 0.01, min_samples = 20).fit(X)
labels = db.labels_

#打印数据被记上的标签，计算标签为-1， 即噪声数据的比例
print('labels:')
print(labels)
ratio = len(labels[labels[:] == -1])/len(labels)
print('Noise ratio:',format(ratio, '.2%'))

#计算簇的个数并打印，评价聚类结果
n_clusters_ = len(set(labels)) - (1 if -1 in labels else 0)

print('Estimated number of cluster: %d' % n_clusters_)
print('Silhouette Coefficient: %.3f' % metrics.silhouette_score(X, labels))

for i in range(n_clusters_):
	print('Cluster ', i, ':')
	print(list(X[labels == i].flatten()))

plt.hist(X,24)
plt.savefig('Hist')
