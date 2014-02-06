#include <stdio.h>

int myprintf(const char* format, ...){
	va_list arguments;
	va_start(arguments,format);
	int ret = vprintf(format,arguments);
	va_end(arguments);
	return ret;
}

int myscanf(const char* format, ...){
	va_list arguments;
	va_start(arguments,format);
	int ret = vscanf(format,arguments);
	va_end(arguments);
	return ret;
}

int myfscanf(FILE * ptr,const char* format, ...){
	va_list arguments;
	va_start(arguments,format);
	int ret = vfscanf(ptr, format,arguments);
	va_end(arguments);
	return ret;
}

int myfprintf(FILE * ptr,const char* format, ...){
	va_list arguments;
	va_start(arguments,format);
	int ret = vfprintf(ptr, format,arguments);
	va_end(arguments);
	return ret;
}

FILE * myfopen(const char * filename,const char* mode){
	return fopen(filename,mode);
}

int myfclose(FILE * cfile){
	return fclose(cfile);
}

