.PHONY: FORCE
all: FORCE
	$(MAKE) -C .. garliccoin_qt test_garliccoin_qt
clean: FORCE
	$(MAKE) -C .. garliccoin_qt_clean test_garliccoin_qt_clean
check: FORCE
	$(MAKE) -C .. test_garliccoin_qt_check
garliccoin-qt garliccoin-qt.exe: FORCE
	 $(MAKE) -C .. garliccoin_qt
apk: FORCE
	$(MAKE) -C .. garliccoin_qt_apk
