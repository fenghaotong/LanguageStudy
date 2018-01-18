
# coding: utf-8

# # Radiobutton

# In[24]:


import tkinter as tk


# In[25]:

window = tk.Tk()

window.title('my window')
window.geometry('200x200')


# In[26]:

var = tk.StringVar()
l = tk.Label(window, bg = 'yellow', width = 20, text = 'empty')
l.pack()


# In[27]:

def print_selection():
    l.config(text = 'you have selected ' + var.get())   


# In[28]:

rl = tk.Radiobutton(window,
                   text = 'Option A',
                   variable = var,
                   value = 'A',
                   command = print_selection)
rl.pack()


# In[29]:

r2 = tk.Radiobutton(window,
                   text = 'Option B',
                   variable = var,
                   value = 'B',
                   command = print_selection)
r2.pack()


# In[30]:

r3 = tk.Radiobutton(window,
                   text = 'Option C',
                   variable = var,
                   value = 'C',
                   command = print_selection)
r3.pack()


# In[31]:

window.mainloop()


# In[ ]:



