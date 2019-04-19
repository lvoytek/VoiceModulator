#!/usr/bin/python3

from PIL import Image

im = Image.open(input("Filename: "), 'r')
pixels = list(im.getdata())

width = int(input("Image width: "))

threshold = int(input("Threshold: "))

newPixels = [pixels[i:i+width] for i in range(0, len(pixels), width)]

#Append empty pixels to end
for i in range(len(newPixels)):
	for j in range(128-width):
		newPixels[i].append(0)

#Append empty rows to end
while len(newPixels) < 64:
	newPixels.append([0 for i in range(128)])

horizontalBytes = list()

for j in range(8):
	for i in range(128):
		horizontalBytes.append([newPixels[j*8 + k][i] for k in range(8)])

horizontalBytesAsInts = list()

for byte in horizontalBytes:
	newInt = 0
	for i in range(len(byte)):
		if byte[i] > threshold:
			newInt = newInt | (1 << (i))

	horizontalBytesAsInts.append(newInt)


outFile = open("image.txt", 'w')
outFile.write("unsigned char logo[] = {")

for byte in horizontalBytesAsInts[0:-1]:
	outFile.write(hex(byte))
	outFile.write(',')

outFile.write(hex(horizontalBytesAsInts[-1]))

outFile.write("};")