#ifndef HW123FIRST_TICKETOFFICE_H
#define HW123FIRST_TICKETOFFICE_H
#include <vector>
#include <optional>
#include "Ticket.h"

class TicketOffice {
public:
    TicketOffice(long amount, std::vector<Ticket> tickets)
            : amount(amount), tickets(std::move(tickets)){}
    TicketOffice(std::vector<Ticket> tickets){
        //구현
    }
    Ticket getTicketOffice() {
        Ticket ticket = *tickets.begin();
        tickets.erase(tickets.begin());
        return ticket;
    }


private:
    long amount;
    std::vector<Ticket> tickets;

};
#endif //HW123FIRST_TICKETOFFICE_H
