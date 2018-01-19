
# coding: utf-8

# # Canvas画布

# In[44]:


import tkinter as tk
window = tk.Tk()

window.title('my window')
window.geometry('400x400')


# In[45]:

canvas = tk.Canvas(window,
                  bg = 'blue',
                  height = 300,
                  width = 400)
image_file = tk.PhotoImage(file='welcome.gif')
image = canvas.create_image(0,0,anchor = 'center', image = image_file)
x0, y0, x1, y1 = 50, 50, 80, 80
line = canvas.create_line(x0, y0, x1, y1)
oval = canvas.create_oval(x0, y0, x1, y1, fill = 'red')
arc = canvas.create_arc(x0+30, y0+30, x1+30, y1+30, start = 0, extent = 180)
rect = canvas.create_rectangle(200, 60, 200+40, 60+40)
canvas.pack()


# In[46]:

def moveit():
    canvas.move(rect, 0, 2)


# In[47]:

b = tk.Button(window,
              text = 'move',
              command = moveit)
b.pack()


# In[48]:

window.mainloop()


# In[ ]:



