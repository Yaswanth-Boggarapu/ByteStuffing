# bytestuffing
BYTE STUFFING

For receiver, starting and ending of a frame is necessary to recognize the next frames transmitted by the sender.
So in this case Flag bytes with byte stuffing framing method will support.

•	In this method a flag byte, is used as both the starting and ending of a frame. See in the figure below.
•	Two consecutive flag bytes indicate the end of one frame and the start of the next frame.
•	If the receiver ever loses synchronization it can just search for two flag bytes to find the end of the current frame and the start of the next frame.
What if accidental unwanted flag bytes occur in the data?

•	To prevent from wrong flag bytes, escape byte (ESC) is inserted just before each ‘‘accidental’’ flag byte in the data. As shown in the figure below.

•	The data link layer on the receiving end removes the ESC before giving the data to the network layer. This technique is called byte stuffing.

What if accidental unwanted ESC occur in the data?

This unwanted ESC is also stuffed with an escape byte (ESC). As shown in the figure below.

![image](https://user-images.githubusercontent.com/105421035/195014955-56a7f2d8-3979-4cbd-9eba-3903c12d50eb.png)

ALGORITHM:
Algorithm for Framing
Algorithm Byte Stuffing()
{
•	Get the data from the user.
•	Search for FLAG and ESC character in the text.
•	If available, add one extra ESC character to the text.
•	Append the delimiter/flag value at the beginning and end of the data/payload.
•	Print the frame.
}

Algorithm Byte de-Stuffing()
{
•	Get the byte stuffed data from ByteStuffing().
•	If ESC character is available in the text, search whether it is followed by a FLAG or ESC character in the text. If so, eliminate the first ESC character which is an extra character.
•	Remove the delimiter/flag value at the beginning and end of the data/payload.
•	Print the original data.
}


