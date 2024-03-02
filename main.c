/*
Name:Likhith
Date:
Description:
Input:
output:
*/

#include <stdio.h>
#include "types.h"
#include "encode.h"
#include "decode.h"
#include "common.h"
int main(int argc, char **argv)
{
    int status;
    status = check_operation_type(argv);
    if(status == e_encode)
    {
	printf("Selected encoding\n"); 
       EncodeInfo encInfo;
       status=read_and_validate_encode_args(argv, &encInfo);
       if(status == e_success)
       {
	   printf("read and validation is success\n");
	   status=do_encoding(&encInfo);
       }
       else
       {
	   printf("false");
       }

    }
    else if (status == e_decode)
    {
	printf("Selected decoding\n");
       DecodeInfo encInfo;
       status=read_and_validate_decode_args(argv, &encInfo);
       if(status == e_success)
       {
	   printf("read and validation is success\n");
	   status=do_decoding(&encInfo);
       }
       else
       {
	   printf("false");
       }


    }
    else
    {
	printf("./a.out -e <.bmp> <.text> \n");
	printf("./a.out -d <.bmp> <d.codetxt>\n");
    } 
 return 0;

}


