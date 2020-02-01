#!/usr/bin/env bats
#
# docthis tests, from root folder run: ./testme.sh.

setup() {
    source docthis.sh
    rm -rf /tmp/standard_documentation
}

@test "Show help with help function." {
    [[ "$(help)" == *'Uses Sphinx'* ]]
}

@test "Show help with docthis script." {
    run ./docthis.sh -h
    [[ "$output" == *'Uses Sphinx'* ]]
}

@test "Get parameters." {
    get_parameters "-p /tmp"
    [[ $PROJECT_PATH == *'/tmp'* ]]
}

@test "Generate documentation." {
    if ! [[ -f /tmp/standard_documentation ]]; then
        mkdir /tmp/standard_documentation
    else
        rm -rf /tmp/standard_documentation
    fi
    run ./docthis.sh -p /tmp/standard_documentation
    [[ -f /tmp/standard_documentation/README-single.rst ]]
}
