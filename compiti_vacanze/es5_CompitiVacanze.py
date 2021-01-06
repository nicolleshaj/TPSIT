# Implementare il videogioco snake tramite il modulo turtle.

import turtle
import math
import random

#punteggio
punti = 0
punti_massimi = 0 

#screen
win = turtle.Screen()
win.bgcolor("lightgreen")
win.title("Snake")
#crea bordi
pen = turtle.Turtle()
pen.penup()
pen.setposition(-300,-300)
pen.pendown()
pen.pensize(3)
for i in range(4):
    pen.forward(600)
    pen.left(90)
pen.hideturtle()

#snake
snake = turtle.Turtle()
snake.color("blue")
snake.shape("triangle")
snake.penup()
snake.speed(0)


#cibo
cibo = turtle.Turtle()
cibo.color("red")
cibo.shape("circle")
cibo.penup()
cibo.speed(0)
cibo.setposition(random.randint(-290, 290), random.randint(-290, 290))

speed = 2

#movimento da tastiera
def alto():
    snake.setheading(90)
def basso():
    snake.setheading(270)
def destra():
    snake.setheading(0)
def sinistra():
    snake.setheading(180)

win.listen()
win.onkey(alto, "Up")
win.onkey(basso, "Down")
win.onkey(destra, "Right")
win.onkey(sinistra, "Left")

def collisione(t1, t2):
    d = math.sqrt(math.pow(t1.xcor() -t2.xcor(), 2) + math.pow(t2.ycor() - t1.ycor(), 2))
    if d < 15:
        return True
    else:
        return False
def bordi():
    if snake.ycor() > 290:
        return 1 
    elif snake.ycor() < -1 * 290:
        return 2 
    elif snake.xcor() > 290:
        return 3
    elif snake.xcor() < -1 * 290:
        return 4

while True:
    snake.forward(speed)
    
    if collisione(snake, cibo):
        cibo.setposition(random.randint(-290, 290), random.randint(-290, 290))
        punti += 10
        speed += 0.5
        if punti > punti_massimi:
            punti_massimi = punti
        pen.write("Score: {}  High Score: {}".format(punti, punti_massimi), align="left", font=("arial", 24, "normal"))

    #collisione bordi   
    if bordi() == 1:
        punti = 0
        pen.write("Score: {}  High Score: {}".format(punti, punti_massimi), align="left", font=("arial", 24, "normal"))
        win.bye()
    if bordi() == 2:
        punti = 0
        pen.write("Score: {}  High Score: {}".format(punti, punti_massimi), align="left", font=("arial", 24, "normal"))
        win.bye()
    if bordi() == 3:
        punti = 0
        pen.write("Score: {}  High Score: {}".format(punti, punti_massimi), align="left", font=("arial", 24, "normal"))
        win.bye()
    if bordi() == 4:
        punti = 0
        pen.write("Score: {}  High Score: {}".format(punti, punti_massimi), align="left", font=("arial", 24, "normal"))
        win.bye()

win.mainloop()