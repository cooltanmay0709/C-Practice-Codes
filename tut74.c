// File Handling - Count chars, spaces, tabs and new lines in a file.

# include<stdio.h>

int main() 
{ 
   FILE *fp ; 
   char ch ; 
    int nol = 0, not = 0, nos = 0, noc = 0 ; 
 
    fp = fopen ( "tut43.c", "r" ); 
    while ( 1 ) 
    { 
        ch = fgetc ( fp ); 
        if ( ch == EOF ) 
        break; 
        noc++; 
        if ( ch == ' ' ) 
        nos++; 
        if ( ch == '\n' ) 
        nol++; 
        if ( ch == '\t' ) 
        not++; 
    } 
    fclose ( fp ); 
    printf ( "\nNumber of characters = %d", noc ); 
    printf ( "\nNumber of blanks spaces = %d", nos ); 
    printf ( "\nNumber of tabs = %d", not ); 
    printf ( "\nNumber of lines = %d", nol );

    return 0; 
}