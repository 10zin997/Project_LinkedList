# project_LinkedList


Assignment #3 - Linked Lists

You are to use Linked Lists to do this program

The "XYZ Widget Store" receives shipments of widgets at various costs. The store's
policy is to charge a 30% markup, and to sell widgets which were received earlier
before widgets which were received later. This is called a First In First Out policy.

Write a program using linked lists that reads in 3 types of input data and does the following:

A sales record which contains an "S" in column 1 and a quantity which represents the number
of widgets sold.

A receipt record which contains an "R" in column 1 and a quantity which represents the
number of widgets sold.

A receipt record which contains an "R" in column 1 and a quantity and a price which represents
the receipt of a quantity of widgets at the stated cost per widget.

a promotion card which contains a "P" in column 1 and a number such as 25 which would represent
a 25% discount to the next 2 buying customers (the next 2 sales cards)

The program should...

Print a message after each receipt record is read in with the price of the widgets received.

Print a message after each promotion card is read in with the amount of discount the
next two customers will be receiving.

After a sales record is read in, print a message stating the number sold and the price of
each widget and total price of the order. For example if 200 widgets were sold and there
were 50 widgets at $1.00 and 100 at $2.00 and 50 at $3.00 print (recall the 30% markup and the FIFO
policy).

    200 Widgets sold
    50 at 1.30 each    Sales: $65.00
    100 at 2.60 each   Sales: $260.00
    50 at 3.90 each    Sales: $195.00
                    Total Sales: $520.00

If there are insufficient number of widgets in stock to fill an order sell as many as are
available and then print...

    "remainder of XXX Widgets not available"

Do not forget the promotional discount

At the end of the data before exiting the program print out under a separate heading the
widgets still left in stock and their original purchase price.
