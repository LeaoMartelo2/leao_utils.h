# leao_utils.h

## Collection of small single header utility libraries, mostly in C 

## leao_types.h 

Collection of type definitions and utility functions related to types.


Provides:

 - vec3_lt
    - vec3_add     (vec3_lt a, vec3lt b)
    - vec3_subtract(         **        )
    - vec3_multiply(         **        )

 - vec2_lt
    - vec2_add     (vec2_lt a, vec2_lt b)
    - vec2_subtract(         **         )
    - vec2_multiply(         **         )

 - bool_to_cstr(bool value)
 - int_to_cstr(int value)

Example:

```C
    bool bool_var = false;
    printf("boolean: %s \n", bool_to_cstr(bool_var));
```


## leao_file.h

Collection of utility functions related to files.

Provides:
 - file_exists(const char* path);
 - create_dir_if_dosent_exist(const char *path)


```C
    if (file_exists("leao_file.h")) {
            printf("file exists\n");
    } else {
            printf("dosen't exist\n");
    }
```
