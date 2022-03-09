#include "Interface/interface.h"
#include "Repozitory/repozitory.h"
#include "Service/service.h"

int main() {
    repo* repo = repo_initialization();
    service* srv = service_initialization(repo);
    interface* ui = interface_initialization(srv);

    interface_run(ui);

    repo_destructor(repo);
    service_destructor(srv);
    interface_destructor(ui);

    return 0;
}
