
# coding: utf-8

# # Checkbutton勾选项

# In[12]:


import tkinter as tk
window = tk.Tk()

window.title('my window')
window.geometry('200x200')


# In[13]:

l = tk.Label(window, bg = 'yellow', width = 20, text = 'empty')
l.pack()


# In[14]:

def print_selection():
    if (var1.get() == 1)&(var2.get() == 0):
        l.config(text = 'I love only Python')
    elif (var1.get() == 0)&(var2.get() == 1):
        l.config(text = 'I love only C++') 
    elif (var1.get() == 1)&(var2.get() == 1):
        l.config(text = 'I love Both')
    else:
        l.config(text = 'I do not love either')


# In[15]:

var1 = tk.IntVar()
c1 = tk.Checkbutton(window,
                   text = 'Python',
                   variable = var1,
                   onvalue = 1,
                   offvalue = 0,
                   command = print_selection)
c1.pack()


# In[16]:

var2 = tk.IntVar()
c2 = tk.Checkbutton(window,
                   text = 'C++',
                   variable = var2,
                   onvalue = 1,
                   offvalue = 0,
                   command = print_selection)
c2.pack()


# In[17]:

window.mainloop()


# In[ ]:



