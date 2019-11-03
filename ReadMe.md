
# 五子棋AI

## 接口

AI主类为 AiGoBang.cpp

以下是接口
```cpp
/* 开放接口 */
    void test();// 默认人类先下
    AiGoBang();
    std::pair<int,int> getCOMPUTERMove(int x, int y) {
         setPos(x, y, HUMEM);
         getNextPos();
         setPos(searchPos.first,searchPos.second, COMPUTER);
         return searchPos;
    }
    void reset();
    void setLevel(int level = 7) {
        DEPTH = level;
    }
    void setWIDTH(int _WIDTH = 15) {
        WIDTH = _WIDTH;
    }
    void setHEIGHT(int _HEIGHT = 15) {
        HEIGHT = _HEIGHT;
    }
    void setCOMPUTERFirst() {
        COMPUTER = 1;
        HUMEM = 2;
        setPos(7, 7, COMPUTER);
    }
    void setHUMANFirst() {
        COMPUTER = 2;
        HUMEM = 1;
    }
```
