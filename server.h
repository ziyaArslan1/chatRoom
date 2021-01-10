#ifndef _SERVER_H_
#define _SERVER_H_

#include <stdlib.h>
#include <stddef.h>
#include <string.h>

typedef struct ClientNode {
	int data;
	struct ClientNode *prev;
	struct ClientNode *link;
	char ip[16];
	char name[35];
}CliList;

CliList *newCli(int sockFd, char *ip) {
	CliList *tmp = (CliList*)malloc(sizeof(CliList));

	tmp->data = sockFd;
	tmp->prev = NULL;
	tmp->link = NULL;
	strncpy(tmp->ip, ip, 16);
	strncpy(tmp->name, "NULL", 5);

	return tmp;
}

#endif /* server.h */
