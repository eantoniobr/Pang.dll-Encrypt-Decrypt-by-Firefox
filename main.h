#ifndef __MAIN_H__
#define __MAIN_H__

#include <windows.h>

/*  To use this exported function of dll, include this header
 *  in your project.
 */

#define DLL_EXPORT __declspec(dllexport)

#ifdef __cplusplus
extern "C"
{
#endif

int DLL_EXPORT _pangya_client_decrypt(char *buffin, int size, char **buffout, int *buffoutSize, short int key);
int DLL_EXPORT _pangya_client_encrypt(char *buffin, int size, char **buffout, int *buffoutSize, short int key, char packetid);
int DLL_EXPORT _pangya_server_decrypt(char *buffin, int size, char **buffout, int *buffoutSize, short int key);
int DLL_EXPORT _pangya_server_encrypt(char *buffin, int size, char **buffout, int *buffoutSize, short int key);
void DLL_EXPORT _pangya_free(char **buffout);
unsigned int DLL_EXPORT _pangya_deserialize(unsigned int deserialize);

#ifdef __cplusplus
}
#endif

#endif // __MAIN_H__
