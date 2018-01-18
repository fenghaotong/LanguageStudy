
# coding: utf-8

# #  Listbox列表部件

# In[20]:


import tkinter as tk


# In[21]:

window = tk.Tk()

window.title('my window')
window.geometry('200x200')


# In[22]:

var1 = tk.StringVar()
l = tk.Label(window, bg = 'yellow', width = 4, textvariable = var1)
l.pack()


# In[23]:

def print_selection():
    value = lb.get(lb.curselection())
    var1.set(value)


# In[24]:

#按钮
b1 = tk.Button(window, 
              text = 'print selection', 
              width = 15, 
              height = 2,
              command = print_selection)
b1.pack()


# In[25]:

var2 = tk.StringVar()
var2.set((11,22,33,44))
lb = tk.Listbox(window,listvariable = var2)
list_items = [1,2,3,4]
for item in list_items:
    lb.insert('end',item)

lb.insert(1, 'first')
lb.insert(2, 'second')
lb.delete(2)
lb.pack()


# In[26]:

window.mainloop()


# In[ ]:




# In[ ]:



