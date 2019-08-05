#ifndef Array_hpp
#define Array_hpp
 
template <class T>
class Array{
private:
  T *base;    //数组首地址
  int length;   //数组中元素
  int size;    //数组大小,以数组中元素的大小为单位
public:
  //初始化数组，分配内存
  bool init();
  //检查内存是否够用，不够用就增加
  bool ensureCapcity();
  //添加元素到数组尾
  bool add(T item);
  //插入元素到数组的具体位置，位置从1开始
  bool insert(int index,T item);
  //删除指定位置的元素并返回，位置从1开始
  T del(int index);
  //返回指定位置的元素
  T objectAt(int index);
  //打印数组所有元素
  void display();
};
 
#endif /* Array_hpp */