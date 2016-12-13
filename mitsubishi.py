import turtle

def draw_sign(some):
    '''Making polygons for the sign'''
    for i in range(0, 3):
        some.begin_fill()
        some.forward(100)
        some.right(60)
        some.forward(100)
        some.right(120)
        some.forward(100)
        some.right(60)
        some.forward(100)
        some.end_fill()
        

def mitsubishi():
    '''Defining the turte'''
    creator = turtle.Turtle()
    creator.color("red")
    creator.speed(10)
    creator.shape("turtle")
    creator.ht() #Hiding the creator(turtle)

    #Creating window for the sign
    window = turtle.Screen()
    window.bgcolor("white")

    draw_sign(creator)

    window.exitonclick()

mitsubishi()
