#!/usr/bin/python3

from PIL import Image

im = Image.open(input("Filename: "), 'r')
pixels = list(im.getdata())

width = int(input("Image width: "))

newPixels = [pixels[i:i+width] for i in range(0, len(pixels), width)]

horizontalBytes = list()

for i in range(width):
	for j in range(int(len(pixels)/width/8)):
		horizontalBytes.append([newPixels[j*8 + k][i] for k in range(8)])

horizontalBytesAsInts = list()

for byte in horizontalBytes:
	newInt = 0
	for i in range(len(byte)):
		if byte[i] > 123:
			newInt = newInt | (1 << (7 - i))

	horizontalBytesAsInts.append(newInt)


outFile = open("image.txt", 'w')
outFile.write("unsigned char image[][] = {")

for byte in horizontalBytesAsInts:
	outFile.write(hex(byte))
	outFile.write(',')

outFile.write("};")