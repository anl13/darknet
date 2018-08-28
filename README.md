# Brief Introduction 
This is a modified version of original darknet. Support C++ batch detection manner. 

Original `README.md` see `README.md.bk`. 

It is just for test and personal usage. I am happy for any advice on it. 

# Changes 
This code is modified to detect batch images. `src/yolo_batch.hpp` and `src/yolo_batch.cpp` are modified version of `yolo_v2_class.hpp` and `yolo_v2_class.cpp`, with tracking feature removed and batch detection added. 

# Compiling 
Just make it. It will generate some test executable. Source code for testing executable are `src/test*`. 

My environment: CUDA 9.0 with CUDNN 7.0.5, Ubuntu 16.04, gcc5.4.0

# Evaluation
With batch_size = 4, batch detection may save about 10ms compared with one-by-one manner. 