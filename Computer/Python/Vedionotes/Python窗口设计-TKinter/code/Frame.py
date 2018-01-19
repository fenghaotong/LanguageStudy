
# coding: utf-8

# # Frame框架

# In[8]:


import tkinter as tk
window = tk.Tk()

window.title('my window')
window.geometry('400x400')


# In[9]:

tk.Label(window, text='on the window').pack()


# In[10]:

frm = tk.Frame(window)
frm.pack()


# In[11]:

frm_l = tk.Frame(frm)
frm_r = tk.Frame(frm)
frm_l.pack(side='left')
frm_r.pack(side='right')


# In[12]:

tk.Label(frm_l, text='on the frm_l1').pack()
tk.Label(frm_l, text='on the frm_l2').pack()
tk.Label(frm_r, text='on the frm_r1').pack()


# In[13]:

window.mainloop()

