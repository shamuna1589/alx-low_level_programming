int largest_number(int a, int b, int c)
{
// Function logic here
if (a >= b && a >= c) {
return a;
} else if (b >= a && b >= c) {
return b;
} else {
return c;
}
}
}
