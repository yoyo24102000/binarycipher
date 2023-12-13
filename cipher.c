#include <string.h>
#include <stddef.h>

void my_xor_crypt(void *data, size_t data_len, const void *key, size_t key_len) {
    unsigned char *data_ptr = (unsigned char *)data;
    const unsigned char *key_ptr = (const unsigned char *)key;

    for (size_t i = 0; i < data_len; ++i) {
        data_ptr[i] ^= key_ptr[i % key_len];
    }
}

void my_rol_crypt(void *data, size_t data_len, const void *key, size_t key_len) {
    unsigned char *data_ptr = (unsigned char *)data;
    const unsigned char *key_ptr = (const unsigned char *)key;

    for (size_t i = 0; i < data_len; ++i) {
        data_ptr[i] = (data_ptr[i] + key_ptr[i % key_len]) & 0xFF;
    }
}
