# cxx介绍
**c++常用语法，含STL库等编程，通过CMakeLists.txt编译实现**

# 开发工具
**使用vs code，安装开发插件C/C++,CMake,CMake Tool等**

# 配置自动化编译调试
新建文件夹 .vscode，然后在文件夹下新建如下2个文件
launch.json和task.json，可参考02_soldier_gun  

**注意**  

 在launch.json文件中"preLaunchTask": "Build soldierGun", // 此处名字，需要通过tasks.json文件 的task lable决定  
 
 **配置完成，按F5即可选择c/c++自动化调试**

 # 课程目录
 **01_helloworld**  
 第一个c++应用程序

 **02_soldier_gun**  
 1. 实例化了士兵和枪对象，通过cmake语法及launch.json,task.json实现自动化编译、调试，此章节涉及面较为全面  
 2. 增加googletest单元测试用例，需要根据此教程(https://github.com/google/googletest/blob/main/googletest/README.md),编译、安装到系统目录/usr/local   

 **03_singleton_lazy**  
 设计模式之单例(懒汉模式)，表示在一个线程或进程里，对于这个类只实例化一个对象  

 **04_singleton_eager**  
 设计模式之单例(饿汉模式)，表示在一个线程或进程里，对于这个类只实例化一个对象  

 **05_bridge**  
 设计模式之桥接，将抽象部分与实现部分分离，使他们都可以独立的变化  
 引入了抽象类，当定义的类内部的方法使用了virtual和 = 0修饰时，为纯虚函数，也叫抽象类，需要在派生类实现  

 **06_template**  
 函数、类模板  

 **07_smart_poniter**  
 智能指针  

 **08_vector**  
 stl标准模板库，使用vector容器存储自定义数据结构。vector容器是单向开口的连续内存空间,是一个动态数组容器，适用于许多不同的应用场景，特别是当您需要高效管理动态大小数组时。然而，需要注意的是，由于它的连续内存分配特性，当插入或删除元素时，可能会导致内存重分配，因此在性能敏感的应用中需要谨慎使用  
 
 **09_deque**  
 stl标准模板库，使用deque容器存储数据。deque是双向开口的连续线性空间，适用于需要在队列的前后两端进行频繁插入和删除操作的场景，同时支持随机访问  
   
 **10_map**  
 stl标准模板库，使用map容器，键-值（key-value）存储的方式，适用于需要高效查找、自动排序以及唯一键的场景。如果需要允许重复键，可以考虑使用std::multimap  

 





