CC := g++

SRCEXT := cpp
HEADEREXT := h

TARGET = Observer
BUILDDIR := build

CFLAGS := -Wall -Werror -std=c++1z -O2 -g

SRCDIR := src

SOURCES := $(shell find $(SRCDIR) -type f -name *.$(SRCEXT))
HEADERS = $(wildcard $(SRCDIR)/*.$(HEADEREXT))
OBJECTS := $(patsubst $(SRCDIR)/%,$(BUILDDIR)/%,$(SOURCES:.$(SRCEXT)=.o))

$(TARGET): $(OBJECTS)
	@echo " Linking..."
	$(CC) $^ -o $(TARGET) $(LFLAGS) $(LDFLAGS) $(CUDAFLAGS)

$(BUILDDIR)/%.o: $(SRCDIR)/%.$(NVSRCEXT)
	$(NVCC) $(CUDAFLAGS) -c -o $@ $<

$(BUILDDIR)/%.o: $(SRCDIR)/%.$(SRCEXT)
	@mkdir -p $(BUILDDIR)
	$(CC) $(CFLAGS) $(INC) -c -o $@ $<

clean:
	@echo " Cleaning...";
	@echo " $(RM) -r $(BUILDDIR) $(TARGET)"; $(RM) -r $(BUILDDIR) $(TARGET)