#define _CRT_SECURE_NO_WARNINGS 1
import turtle

turtle.pensize(4)
turtle.speed(0)#�޸��ٶ�
turtle.screensize(canvwidth = 1320, canvheight = 520, bg = 'white')
turtle.penup()#�����Ͻ���ʼ��

#��ʼ��������
turtle.goto(-600, 250)
turtle.pendown()
turtle.seth(0)
turtle.forward(1200)
turtle.right(90)
turtle.forward(541)
turtle.right(90)
turtle.forward(1200)
turtle.right(90)
turtle.forward(541)

#��forѭ�����Ʒֽ��ߣ�����ɫ
turtle.right(90)
turtle.forward(384)
turtle.pensize(1)
turtle.color('purple')
turtle.begin_fill()#��ʼ��ɫ
n = 0
while n < 9:
turtle.seth(-90)
turtle.left(72.5)
turtle.forward(100)
turtle.right(72.5)
turtle.right(72.5)
turtle.forward(100)
n += 1
turtle.seth(0)
turtle.forward(816)
turtle.left(90)
turtle.forward(541)
turtle.left(90)
turtle.forward(816)
turtle.end_fill()
turtle.done()