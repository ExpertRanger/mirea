#include "heap.h"
#include <iostream>

int main()
{
    int N, num;
    std::cin >> N;
    int* nums = new int[N];

    for (int i = 0; i < N; i++)
    {
        std::cin >> num;
        nums[i] = num;
    }
    Heap* bruh = new Heap(N, nums);
    int cost = 0;

    while (bruh->count() > 1)
    {
        int min1 = bruh->pop_min();
        int min2 = bruh->pop_min();
        int sum = min1 + min2;
        cost += sum;
        bruh->insert(sum);
        std::cout << *bruh << std::endl;
    }
    std::cout << "Cost: " << cost;

}