#include <stdio.h>

typedef struct xy
{
    int x;
    int y;
}Map;
 
Map map[100001];
 
void SwapX(int a, int b) // a,b 스왑 함수 
{
    Map temp = map[a];
    map[a] = map[b];
    map[b] = temp;
}
 
int PartitionX(int left, int right)
{
    Map pivot = map[left]; // 피벗의 위치는 가장 왼쪽에서 시작
    int low = left + 1;
    int high = right;

    while (low <= high) // 교차되기 전까지 반복한다 
    {
        while (pivot.x >= map[low].x && low <= right) // 피벗보다 큰 값을 찾는 과정 
        {
            low++; // low를 오른쪽으로 이동 
        }
        while (pivot.x <= map[high].x && high >= (left + 1)) // 피벗보다 작은 값을 찾는 과정 
        {
            high--; // high를 왼쪽으로 이동
        }
        if (low <= high)// 교차되지 않은 상태이면 스왑 과정 실행 
        {
            SwapX(low, high); //low와 high를 스왑 
        }
    }
    SwapX(left, high); // 피벗과 high가 가리키는 대상을 교환 
    return (high);  // 옮겨진 피벗의 위치정보를 반환 
}

void QuickSortX(int left, int right)
{
    if (left <= right)
    {
        int pivot = PartitionX(left, right); // 둘로 나누어서
        QuickSortX(left, pivot - 1); // 왼쪽 영역을 정렬한다.
        QuickSortX(pivot + 1, right); // 오른쪽 영역을 정렬한다.
    }
}

void SwapY(int a, int b) // a,b 스왑 함수 
{
    Map temp = map[a];
    map[a] = map[b];
    map[b] = temp;
}
 
int PartitionY(int left, int right)
{
    Map pivot = map[left]; // 피벗의 위치는 가장 왼쪽에서 시작
    int low = left + 1;
    int high = right;

    while (low <= high) // 교차되기 전까지 반복한다 
    {
        while (pivot.y >= map[low].y && low <= right) // 피벗보다 큰 값을 찾는 과정 
        {
            low++; // low를 오른쪽으로 이동 
        }
        while (pivot.y <= map[high].y && high >= (left + 1)) // 피벗보다 작은 값을 찾는 과정 
        {
            high--; // high를 왼쪽으로 이동
        }
        if (low <= high)// 교차되지 않은 상태이면 스왑 과정 실행 
        {
            SwapY(low, high); //low와 high를 스왑 
        }
    }
    SwapY(left, high); // 피벗과 high가 가리키는 대상을 교환 
    return high;  // 옮겨진 피벗의 위치정보를 반환 
}

void QuickSortY(int left, int right)
{
    if (left <= right)
    {
        int pivot = PartitionY(left, right); // 둘로 나누어서
        QuickSortY(left, pivot - 1); // 왼쪽 영역을 정렬한다.
        QuickSortY(pivot + 1, right); // 오른쪽 영역을 정렬한다.
    }
}

int main()
{
    int n, i;
    int start, end;
    int cnt = 0;

    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d %d", &map[i].x, &map[i].y);
    QuickSortX(0, n - 1);
    i = 1;
    start = 0;
    end = n - 1;
    while (i < n)
    {
        if (map[i].x == map[i - 1].x)
        {
            cnt = 1;
            start = i - 1;
            while (map[i].x == map[i - 1].x)
            {
                end = i;
                i++;
            }
        }
        if (cnt >= 1)
        {
            QuickSortY(start, end);
            start = i;
        }
        cnt = 0;
        i++;
    }
    for (i = 0; i < n; i++)
        printf("%d %d\n", map[i].x, map[i].y);
}