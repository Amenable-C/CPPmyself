#ifndef HW65SECOND_TICKETSELLER_H
#define HW65SECOND_TICKETSELLER_H
#include "TicketOffice.h"
#include <memory>
class TicketSeller {
public:
    TicketSeller(std::shared_ptr<TicketOffice>& ticketOffice):  ticketOffice(ticketOffice){}
    TicketOffice& getTicketOffice() {
        std::shared_ptr<TicketOffice> tmp {ticketOffice};
        return *tmp;
    }
    void report(){
        ticketOffice->report("TicketSeller > TicketOffice");
    }
private:
    std::shared_ptr<TicketOffice> ticketOffice;
};
#endif //HW65SECOND_TICKETSELLER_H
