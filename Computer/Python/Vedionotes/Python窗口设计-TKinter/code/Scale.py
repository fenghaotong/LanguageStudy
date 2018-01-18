
# coding: utf-8

# # Scale尺度

# In[1]:


import tkinter as tk
window = tk.Tk()

window.title('my window')
window.geometry('200x200')


# In[2]:

l = tk.Label(window, bg = 'yellow', width = 20, text = 'empty')
l.pack()


# In[4]:

def print_selection(v):
    l.config(text = 'you have selected ' + v)   


# In[5]:

s = tk.Scale(window,
            label = 'try me',
            from_ = 5,
            to = 11,
            orient = tk.HORIZONTAL,
            length = 200,
            showvalue = 0,
            tickinterval = 3,
            resolution = 0.01,
            command = print_selection)
s.pack()


# In[6]:

window.mainloop()


# In[ ]:



