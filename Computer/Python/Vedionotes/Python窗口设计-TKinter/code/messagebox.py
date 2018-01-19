
# coding: utf-8

# # messagebox弹窗

# In[66]:


import tkinter as tk
import tkinter.messagebox

window = tk.Tk()

window.title('my window')
window.geometry('400x400')


# In[67]:

def hit_me():
    #tk.messagebox.showinfo(title='Hi', message='hahahhaha')
    #tk.messagebox.showwarning(title='Hi', message='nononono')
    #tk.messagebox.showerror(title='Hi', message='NO!')
    #返回yes或者no
    #print(tk.messagebox.askquestion(title='Hi', message='haha'))
    #返回True或者False
    #print(tk.messagebox.askyesno(title='Hi', message='haha'))
    print(tk.messagebox.askretrycancel(title='Hi', message='haha'))
    print(tk.messagebox.askokcancel(title='Hi', message='haha'))


# In[68]:

tk.Button(window, text='hit me', command=hit_me).pack()


# In[69]:

window.mainloop()


# In[ ]:



