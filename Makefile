
all:
	@-rm *.gcno
	@-rm  *.gcda
	@gcc t.c --coverage -o t.exe
	@echo --- testing ---
	t t.c
	t
	@echo --- end test ---
	@echo --- test report ---
	@gcov t.c
