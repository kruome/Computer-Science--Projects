#include <iostream>
using namespace std;
int
left (int i)
{
  return i * 2 + 1;
}

int
right (int i)
{
  return 2 * i + 2;
}

void
maxHeapify (int a[], int n, int i)
{
  int l = left (i);
  int r = right (i);
  int largest = i;
  if (l <= n && a[l] > a[i])
    largest = l;
  else
    largest = i;
  if (r <= n && a[r] > a[largest])
    largest = r;
  if (largest != i)
    {
      swap (a[i], a[largest]);
      maxHeapify (a, n, largest);
    }
}

void
buildHeap (int a[], int n)
{
  for (int i = n / 2 - 1; i >= 0; i--)
    {
      maxHeapify (a, n, i);
    }
}

int
main ()
{
  int array[100];
  int arraysize = sizeof (array) / sizeof (int);
  for (int i = 0; i < arraysize; i++)
    {
      array[i] = i + 1;
    }
  cout << "Before max heapify: ";
  for (int i = 0; i < arraysize; i++)
    {
      cout << array[i] << " ";
    }
  cout << endl << "----------------------------" << endl;
  buildHeap (array, 100);
  cout << "After max heapify: ";
  for (int i = 0; i < arraysize; i++)
    {
      cout << array[i] << " ";
    }
  return 0;
}
