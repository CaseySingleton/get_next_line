# get_next_line
get_next_line() is a funciton that will gather information from a file or standard input up until a newline character or the end of file, and then places that information into a string passed by address in the function parameters.

Purpose:
- Create a successful function that has no leaks
- Must with multiple file descriptors
- Must with constant input
- Must with any buffer read size
  
What I learned:
- How to use static variables to my advantage (in this case a static linked list)
- How to properly manage allocated memory to prevent any data leaks
- How to manage and manipulate pointers in general
- How to properly use the read() function provided by unistd.h
- The magic of using logical operators to my advantage
- How to ask and structure questions that give me the answers that I am looking for

Overall I am very happy with my get_next_line() function. Using linked lists may get slower for say maybe 1000 different file descriptors. But hey! I feel the code is nice and tight, even though now I see things that I could have done better. This project was not the most fun, but I feel it was the project that solidified my basic understanding of pointers and memory management.
