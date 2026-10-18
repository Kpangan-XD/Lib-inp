#include <iostream>
#include <new>
using std::cout, std::endl;


template<typename T, int r, int c>
struct Array2d
{
  private:
    struct Node
    {
      T data[r][c];
    };
    Node n;
    int p[r];
  public:
    Array2d()
    {
      for (int i = 0; i < r; i++)
      {
        p[i] = 0;
        for (int j = 0; j < c; j++)
        {
          n.data[i][j] = 0;
        }
      }
    }

    ~Array2d()
    {
      clear();
    }

    T* operator[](int X)
    {
      return n.data[X];
    }

    T* operator[](int X) const
    {
      return n.data[X];
    }

    Array2d& append(T d)
    {
      int x = 0;
      if (x >= r) return *this;
      else if (p[x] >= c) x++;
      n.data[x][p[x]] = d;
      p[x]++;
      return *this;
    }

    Array2d& pop()
    {
      int x = r - 1;
      if (x <= 0) return *this;
      else if (p[x] <= 0) x--;
      n.data[x][p[x]] = -1;
      p[x]--;
      return *this;
    }

    T get(int ROW, int COLS)
    {
      return n.data[ROW][COLS];
    }

    void clear()
    {
      for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
          n.data[i][j] = -1;
    }

    void copy(Array2d target)
    {
      for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
          target.n.data[i][j] = n.data[i][j];
    }

    constexpr int rows() { return r; }
    constexpr int cols() { return c; }
};

int main(void)
{
  Array2d<char, 2, 3> grade;
  grade.append('S').append('A').append('B')
    .append('C').append('F').append('D');
  for (int i = 0; i < grade.rows(); i++)
    for (int j = 0; j < grade.cols(); j++)
      cout << "grade : " << grade[i][j] << endl;
  return 0;
}
