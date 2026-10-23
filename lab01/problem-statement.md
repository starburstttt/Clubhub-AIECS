
# Problem statement · ITC Club Hub (v0.1, 2026-10-20)

## Problem

The problem of club events being announced in many chat groups, with no single place to sign up, no limit on attendance and no attendance record, affects students, club leaders, organisers and administrators; the impact of which is overcrowded rooms, empty events and no reliable picture of what clubs actually do.
A successful solution would give every approved club one place to publish events, let students register and cancel under clear rules, and keep an attendance record that administrators can summarise each month.

## Vision

For ITC students and club leaders who organise and join club events, ITC Club Hub is a club event management application that handles club approval, event registration, check-in and attendance in one place.
Unlike chat groups and spreadsheets, our product enforces capacity and registration rules automatically and keeps a record of every registration and check-in.

## Today's workaround

Club leaders post announcements in chat groups, and students reply to sign up. Leaders count replies by hand, attendance is taken on paper at the door if at all, and administrators have no overview across clubs.

## Scope

- **Built in C++ this semester:** the domain model, the business rules (capacity cannot be exceeded, no double registration, cancellation closes 24 hours before the start, no registration for past events, only approved clubs publish events), a command-line front end, and CSV or JSON file storage.
- **Modelled only (web and mobile):** screens for browsing, registering and cancelling, the club leader's event publishing, the organiser's check-in, and the administrator's monthly report.
- **Out of scope:** the waiting list (a Should feature), real e-mail or push reminders, integration with institute systems, and a live deployment.

