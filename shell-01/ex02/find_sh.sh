#!/bin/bash
find . -name '*.sh' -print | xargs basename -s .sh
