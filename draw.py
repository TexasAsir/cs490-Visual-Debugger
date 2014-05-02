#!/usr/bin/python

import sys
import re
import math
from graphics import *

def func():
	##print "Hello world!"
	#from graphics import *
	win = GraphWin("Visualiztion",1000,800)
	pt = Point(100,50)
	#pt.draw(win)
	rect=Rectangle(Point(20,10),pt)
	rect.draw(win)
	x=1
	win.getMouse()
	win.close()



def lineCount(f):
	lines = [line.strip() for line in open('draw.txt')]	
	i=0
	for line in lines:
		i+=1
	return i




def SLL(lines):
	#from graphics import *
	#using rectangles
	string = lines[1]
	string=str(string)
	
	numVars = filter(str.isdigit,lines[1])
	#print "The number of variables is "
	#print numVars
	
	i=0
	j=0
	index=5



	x=50
	y=100
	X=200
	Y=100*int(numVars)
	
	startA=Point(x,y)
	startB=Point(X,Y)
	win = GraphWin("Visualiztion",1000,800)
	i=2

	fileLen=lineCount("draw.txt")

	#print "The length of the file is"
	#print fileLen


	tX=int(x)
	tY=int(y)
	
	while i<fileLen-1:
		#inner loop
		j=0
		tY=int(y)
		tx=int(x)
		header=lines[i]
		#print "The header is"
		#print header
		while j<int(numVars):
			#print "The value of i is"
			#print i
			header=lines[i+1]
			info=lines[i+2]			

			output = header+"\n"+info
			#print output
			label = Text(Point(tX+40,tY+10), output)
			tY=tY+20
			label.draw(win)
			#print "tX value "+str(tX)
			#tX=tX+140+65
			#tY=int(y)
			i=i+int(numVars)
			j=j+1
		#outer loop
		tX=tX+140+65
		rect=Rectangle(startA,startB)
		rect.draw(win)
		#print i

		x+=200
		X+=200
		startA=Point(x,y)
		startB=Point(X,Y)
		i=i+1
	#boxSize=numVars * 3200
	

	win.getMouse()
	win.close()
	
	

def DLL(lines):
	#from graphics import *
	length=lineCount("dllTest.txt")
	numVars=0
	i=3



	while i < length:
		if not "struct " in lines[i]:
			numVars+=1
		else:
			break
		i+=1

	##print "The number of vars is "
	#print numVars
	
	multiplier=int(numVars)
	if multiplier < 2:
		multiplier=2



	x=50
	y=100
	X=200
	Y=100*multiplier
	
	startA=Point(x,y)
	startB=Point(X,Y)
	win = GraphWin("Doubley Linked List Visualiztion",1900,800)



	
	#i=3
	i=1
	tX=int(x)
	tY=int(y)
	while i < length:
		final = ""
		output=lines[i]
		final = final +"\n"+output
		##print output
		i+=1
		output=lines[i]
		final = final +"\n"+output
		##print output
		i+=1
		j=0
		tX=int(x)
		tY=int(y)
		while j < numVars:
			output=lines[i]
			final = final +"\n"+output
			##print output
			i+=1
			j+=1
		#i+=2	
		#i+=1
		#print final
		#label = Text(Point(tX+40,tY+10), final)
		#label.draw(win)
		
		startA=Point(x,y)
		startB=Point(X,Y)

		tX=tX+140+65
		x+=200
		X+=200
		

		temp=Point(X+x,Y+y)
		
		

		rect=Rectangle(startA,startB)
		#rect.setText(final)
		rect.draw(win)

		#label.setWidth(10)
		label = Text(rect.getCenter(), final)
		label.setSize(8)
		
		#label=Text()
		#label.setText(final)
		label.draw(win)


	#infinity=0
	#while infinity==0:
		#pass
	win.getMouse()
	win.close()

def BTREE(lines):

	fileLen=lineCount("draw.txt")
	fileLen-=3
	#print "The file lenght is "
	#print fileLen
	



	numNodes = filter(str.isdigit,lines[1])
	#h= filter(str.isdigit,lines[2])
	#height =int(h)+3
	
	height=0
	A=False
	while A==False:
		if 2**height<int(numNodes):
			height+=1
			#print height
			#print numNodes
		else:
			A=True	
	
	#print "The number of nodes is "
	#print numNodes
	#print "The height is "
	#print height
	total=math.pow(height,2)
	#from graphics import *	
	win = GraphWin("Binary Tree Visualiztion",800,300)
	
	#data starts at line index 3
	#label = Text(Point(tX+40,tY+10), output)

	
	

	pt=Point(400,50)
	cir=Circle(pt,49)
	cir.draw(win)
	
	index=3


	if index>fileLen:
		output="NULL"
	else:
		output=lines[index]
	label=Text(cir.getCenter(),output)
	label.draw(win)

	


	index+=1







	infinity=1
	height-=1
	
	if height>=0:
		pt=Point(200,100)
		cir=Circle(pt,40)
		cir.draw(win)

		if index>fileLen:
			output="NULL"
		else:
			output=lines[index]
		label=Text(cir.getCenter(),output)
		label.draw(win)
		
		 

		index+=1


		pt=Point(600,100)
		cir=Circle(pt,40)
		cir.draw(win)

		if index>fileLen:
			output="NULL"
		else:
			output=lines[index]
		label=Text(cir.getCenter(),output)
		label.draw(win)
		

		 
		index+=1


	height-=1
	if height>=0:
		pt=Point(100,150)
		cir=Circle(pt,25)
		cir.draw(win)

		if index>fileLen:
			output="NULL"
		else:
			output=lines[index]
		label=Text(cir.getCenter(),output)
		label.draw(win)
		 

		index+=1




		pt=Point(300,150)
		cir=Circle(pt,25)
		cir.draw(win)

		if index>fileLen:
			output="NULL"
		else:
			output=lines[index]
		label=Text(cir.getCenter(),output)
		label.draw(win)


		 

		index+=1




		pt=Point(500,150)
		cir=Circle(pt,25)
		cir.draw(win)

		if index>fileLen:
			output="NULL"
		else:
			output=lines[index]
		label=Text(cir.getCenter(),output)
		label.draw(win)

		 

		index+=1



		pt=Point(700,150)
		cir=Circle(pt,25)
		cir.draw(win)

		if index>fileLen:
			output="NULL"
		else:
			output=lines[index]
		label=Text(cir.getCenter(),output)
		label.draw(win)

		 

		index+=1

	height-=1
	#height+=1
	if height>=0:
		pt=Point(50,200)
		cir=Circle(pt,25)
		cir.draw(win)

		if index>fileLen:
			output="NULL"
		else:
			output=lines[index]
		label=Text(cir.getCenter(),output)
		label.draw(win)

		index+=1




		pt=Point(150,200)
		cir=Circle(pt,25)
		cir.draw(win)

		if index>fileLen:
			output="NULL"
		else:
			output=lines[index]
		label=Text(cir.getCenter(),output)
		label.draw(win)

		index+=1


		pt=Point(250,200)
		cir=Circle(pt,25)
		cir.draw(win)

		if index>fileLen:
			output="NULL"
		else:
			output=lines[index]
		label=Text(cir.getCenter(),output)
		label.draw(win)

		index+=1



		pt=Point(350,200)
		cir=Circle(pt,25)
		cir.draw(win)

		if index>fileLen:
			output="NULL"
		else:
			output=lines[index]
		label=Text(cir.getCenter(),output)
		label.draw(win)


		index+=1

		pt=Point(440,200)
		cir=Circle(pt,25)
		cir.draw(win)
		
		if index>fileLen:
			output="NULL"
		else:
			output=lines[index]
		label=Text(cir.getCenter(),output)
		label.draw(win)



		index+=1



		pt=Point(540,200)
		cir=Circle(pt,25)
		cir.draw(win)
	
		if index>fileLen:
			output="NULL"
		else:
			output=lines[index]
		label=Text(cir.getCenter(),output)
		label.draw(win)


		index+=1



		pt=Point(640,200)
		cir=Circle(pt,25)
		cir.draw(win)


		if index>fileLen:
			output="NULL"
		else:
			output=lines[index]
		label=Text(cir.getCenter(),output)
		label.draw(win)


		index+=1





		pt=Point(740,200)
		cir=Circle(pt,25)
		cir.draw(win)

		if index>fileLen:
			output="NULL"
		else:
			output=lines[index]
		label=Text(cir.getCenter(),output)
		label.draw(win)


		index+=1



	height-=1
	#height+=1
	if height>=0:
		pt=Point(25,250)
		cir=Circle(pt,25)
		cir.draw(win)

		if index>fileLen:
			output="NULL"
		else:
			output=lines[index]
		label=Text(cir.getCenter(),output)
		label.draw(win)


		index+=1


		pt=Point(74,250)
		cir=Circle(pt,25)
		cir.draw(win)

		if index>fileLen:
			output="NULL"
		else:
			output=lines[index]
		label=Text(cir.getCenter(),output)
		label.draw(win)

		index+=1

		pt=Point(123,250)
		cir=Circle(pt,25)
		cir.draw(win)

		if index>fileLen:
			output="NULL"
		else:
			output=lines[index]
		label=Text(cir.getCenter(),output)
		label.draw(win)

		index+=1


		pt=Point(172,250)
		cir=Circle(pt,25)
		cir.draw(win)

		if index>fileLen:
			output="NULL"
		else:
			output=lines[index]
		label=Text(cir.getCenter(),output)
		label.draw(win)


		index+=1


		pt=Point(221,250)
		cir=Circle(pt,25)
		cir.draw(win)


		if index>fileLen:
			output="NULL"
		else:
			output=lines[index]
		label=Text(cir.getCenter(),output)
		label.draw(win)



		index+=1


		pt=Point(270,250)
		cir=Circle(pt,25)
		cir.draw(win)

		if index>fileLen:
			output="NULL"
		else:
			output=lines[index]
		label=Text(cir.getCenter(),output)
		label.draw(win)

		index+=1


		pt=Point(319,250)
		cir=Circle(pt,25)
		cir.draw(win)

		if index>fileLen:
			output="NULL"
		else:
			output=lines[index]
		label=Text(cir.getCenter(),output)
		label.draw(win)

		index+=1


		pt=Point(368,250)
		cir=Circle(pt,25)
		cir.draw(win)


		if index>fileLen:
			output="NULL"
		else:
			output=lines[index]
		label=Text(cir.getCenter(),output)
		label.draw(win)


		index+=1



		pt=Point(417,250)
		cir=Circle(pt,25)
		cir.draw(win)


		if index>fileLen:
			output="NULL"
		else:
			output=lines[index]
		label=Text(cir.getCenter(),output)
		label.draw(win)


		index+=1

		pt=Point(466,250)
		cir=Circle(pt,25)
		cir.draw(win)

		if index>fileLen:
			output="NULL"
		else:
			output=lines[index]
		label=Text(cir.getCenter(),output)
		label.draw(win)

		index+=1


		pt=Point(515,250)
		cir=Circle(pt,25)
		cir.draw(win)

		if index>fileLen:
			output="NULL"
		else:
			output=lines[index]
		label=Text(cir.getCenter(),output)
		label.draw(win)

		index+=1

		pt=Point(564,250)
		cir=Circle(pt,25)
		cir.draw(win)


		if index>fileLen:
			output="NULL"
		else:
			output=lines[index]
		label=Text(cir.getCenter(),output)
		label.draw(win)

		index+=1


		pt=Point(613,250)
		cir=Circle(pt,25)
		cir.draw(win)

		if index>fileLen:
			output="NULL"
		else:
			output=lines[index]
		label=Text(cir.getCenter(),output)
		label.draw(win)

		index+=1

		pt=Point(662,250)
		cir=Circle(pt,25)
		cir.draw(win)

		if index>fileLen:
			output="NULL"
		else:
			output=lines[index]
		label=Text(cir.getCenter(),output)
		label.draw(win)


		index+=1


		pt=Point(711,250)
		cir=Circle(pt,25)
		cir.draw(win)


		if index>fileLen:
			output="NULL"
		else:
			output=lines[index]
		label=Text(cir.getCenter(),output)
		label.draw(win)


		index+=1

		pt=Point(760,250)
		cir=Circle(pt,25)
		cir.draw(win)


		if index>fileLen:
			output="NULL"
		else:
			output=lines[index]
		label=Text(cir.getCenter(),output)
		label.draw(win)


		index+=1
	win.getMouse()
		
	win.close()


def main():
	text = sys.argv[0]
	#F = open("info.txt",'r',0)
	lines = [line.strip() for line in open('draw.txt')]
	#print lines	
	if lines[0]=="#!SLL":
		DLL(lines)
	elif lines[0]=="#!BTREE":
		BTREE(lines)
	elif lines[0]=="#!DLL":
		DLL(lines)
	else:
		pass
	#string=F.read(10)
	##print string
	
	#with open("info.txt") as f:
	#	content = f.readlines()	

	##print content
	#func()


if __name__ == "__main__":
	main()
