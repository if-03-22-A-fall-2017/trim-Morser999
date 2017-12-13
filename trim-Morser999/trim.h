/*----------------------------------------------------------
 *				HTBLA-Leonding / 2AHIF
 * ---------------------------------------------------------
 * Exercise Number: 6
 * Title:			trim.h
 * Author:			E.Röbl
 * Due Date:		December 9, 2017
 * ----------------------------------------------------------
 * Description:
 * Interface for trim
 * ----------------------------------------------------------
 */
 #ifndef TRIM_H
 #define TRIM_H

 #define STRLEN 16

 int remove_blanks ( const char* source);
 void trim	(	const char * source, char * trimmed_string);

 #endif
