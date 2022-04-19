#include <stdbool.h>

void UF_init(int N);

void UF_union(int p, int q);

int UF_find(int p);

bool UF_connected(int p, int q);

void UF_show();