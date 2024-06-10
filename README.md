# Instructions

- First link the 'instrumentation' library

  - ``` gcc -c instrumentation.c ```

  - ```ar rvs instrumentation.a instrumentation.o```

  - ```mv instrumentation.a libinstrumentation.a``` (optional)

- Second, build all application libraries w/ instrumentaion on
  -   Static library
``` g++ -finstrument-functions -c lib1.cpp -L./.. -linstrumentation ``` and ```ar rvs liblib1.a lib1.o```

  -   Dynamic library
```g++ -c -fPIC -finstrument-functions lib1.cpp -o lib1.o``` and  ```g++ lib1.o -shared -o liblib1.so```

- Third, build the main source file and link it all
  
  - ```g++ -fno-permissive -g -finstrument-functions -ldl -Wl,--export-dynamic -L./ -L./.. main.cpp -o main -llib1 -linstrumentation```
(export `LD_LIBRARY_PATH` in case of the dynamic linkage)

