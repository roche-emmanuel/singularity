@set THIS_PATH=%~dp0

@echo Testing stock retriever...
@%THIS_PATH%..\software\bin\win32\sgtLauncher test_stock_retriever.lua --log test_stock_retriever.log
@echo Test done.
REM @pause
