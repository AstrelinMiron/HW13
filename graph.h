#pragma once

#define SIZE 15
class Graph
{
public:

    Graph() {
        for (int i = 0; i < SIZE; i++)
            for (int j = 0; j < SIZE; j++)
                matrix[i][j] = 0;
        vertexCount = 0;
    }
    //добавление вершины
    void addVertex(int vNumber);
    //добавление ребра
    void addEdge(int v1, int v2);
    //удаление вершины
    void delVertex(int vNumber);
    //удаление ребра
    void delEdge(int v1, int v2);
    //вывод значения пути
    void showPairs(int distance);
    //поиск минимального пути
    int findMinDistances(int from, int to);

private:
    //проверка существования ребра между вершинами
    bool edgeExists(int v1, int v2);
    //проверка существования вершины
    bool vertexExists(int v);
    //матрица смежности
    int matrix[SIZE][SIZE]; 
    //хранилище вершин
    int vertexes[SIZE]; 
    //количество добавленных вершин
    int vertexCount; 
};
