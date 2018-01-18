
# coding: utf-8

# # Entry&Text 输入文本框

# In[30]:


import tkinter as tk


# In[31]:

window = tk.Tk()

window.title('my window')
window.geometry('200x200')


# In[32]:

e = tk.Entry(window,
            show = '*',)
e.pack()


# In[33]:

def insert_point():
    var = e.get()
    t.insert('insert', var)


# In[34]:

def insert_end():
    var = e.get()
    t.insert('end', var)


# In[35]:

#按钮
b1 = tk.Button(window, 
              text = 'insert point', 
              width = 15, 
              height = 2,
              command = insert_point)
b1.pack()


# In[36]:

b2 = tk.Button(window,
              text = 'insert end',
              command = insert_end)
b2.pack()


# In[37]:

t = tk.Text(window, height = 2)
t.pack()


# In[38]:

window.mainloop()


# In[ ]:



