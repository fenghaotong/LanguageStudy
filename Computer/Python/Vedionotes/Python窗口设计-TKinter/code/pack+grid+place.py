
# coding: utf-8

# # pack grid place放置位置

# In[22]:


import tkinter as tk
window = tk.Tk()

window.title('my window')
window.geometry('400x400')


# In[2]:

#pack放置位置
tk.Label(window, text=1).pack(side='top')
tk.Label(window, text=1).pack(side='bottom')
tk.Label(window, text=1).pack(side='right')
tk.Label(window, text=1).pack(side='left')


# In[17]:

#grid放置位置
for i in range(4):
    for j in range(3):
        tk.Label(window, text=1).grid(row=i, column=j, padx=10, pady=10)


# In[23]:

#place放置位置

tk.Label(window, text=1).place(x=10, y=100, anchor='sw')


# In[24]:

window.mainloop()


# In[ ]:



