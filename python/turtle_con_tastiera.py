#https://www.tcl.tk/man/tcl8.4/TkCmd/keysyms.htm

import turtle
linea = turtle.Turtle()
win = turtle.Screen()
win.title("disegno usando le frecce") 
win.setup(width = 500, height = 500)
linea.pencolor("green")
lung = 45

def bordi():
    if(linea.ycor() + lung) > win.window_height()/2:
        return 1 
    elif(linea.ycor() - lung) < -1 * win.window_height()/2:
        return 2 
    elif(linea.xcor() + lung)> win.window_width()/2:
        return 3
    elif(linea.xcor() - lung) < -1 * win.window_width()/2:
        return 4 


def Destra():
    if (bordi() != 3):
        linea.setheading(0)
        linea.forward(lung)
        print("destra")
    else:
        pass

def Sinistra():
    if(bordi() != 4):
        linea.setheading(180)
        linea.forward(lung)
        print("sinistra")
    else:
        pass

def Alto():
    if(bordi() != 1):
        linea.setheading(90)
        linea.forward(lung)
        print("alto")
    else:
        pass

def Basso():
    if(bordi() != 2):
        linea.setheading(270)
        linea.forward(lung)
        print("basso")
    else:
        pass
    

win.listen()
win.onkeypress(Destra, "Right")    
win.onkeypress(Sinistra, "Left")
win.onkeypress(Alto, "Up")
win.onkeypress(Basso, "Down")

win.mainloop()