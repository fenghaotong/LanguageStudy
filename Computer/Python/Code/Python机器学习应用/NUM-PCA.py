import matplotlib.pyplot as plt
from sklearn import decomposition
from sklearn.datasets import fetch_olivetti_faces
from numpy.random import RandomState

n_row, n_col = 2, 3 
n_components = n_row * n_col

image_shape = (64, 64)

dataset = fetch_olivetti_faces(shuffle=True, random_state = RandomState(0))
faces = dataset.data

def plot_gallery(title, image, n_col = n_col, n_row = n_row):
	plt.figure(figsize = (2. * n_col, 2.26 * n_row))
	plt.suptitle(title, size = 16)
	for i, comp in enumerate(image):
		plt.subplot(n_row, n_col, i + 1)
		vmax = max(comp.max(), -comp.min())

		plt.imshow(comp.reshape(image_shape), cmap = plt.cm.gray, interpolation = 'nearest', vmin = -vmax, vmax = vmax)
		plt.xticks(())
		plt.yticks(())
	plt.subplots_adjust(0.01, 0.05, 0.99, 0.93, 0.04, 0.)

estimators = [
('Eigenfaces - PCA using randomized SVD',
  decomposition.PCA(n_components = 6, whiten = True)),
('Non-negative components - NMF',
  decomposition.NMF(n_components = 6, init = 'nndsvda', tol = 5e-3))]

for name, estimator in estimators:
	estimator.fit(faces)
	components_ = estimator.components_

	plot_gallery(name, components_[:n_components])

plt.show()
