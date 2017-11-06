//coded by asprazz >> and team

#include <gtk/gtk.h>
#include <string.h>

int uflag; //username checker
int pflag; //password checker
GtkWidget *window;

//for getting username from entry box
void on_login_button_clicked(GtkWidget *widget,gpointer data) {
    char username[20];
    uflag=0;
    strcpy(username,gtk_entry_get_text(GTK_ENTRY(data)));   
    g_print("username=%s",username);
    if(strcmp(username,"user")) {
        uflag=1;
    }
}
//for getting password from entry box
void on_login_button_clicked_for_password(GtkWidget *widget,gpointer data) {
    int flag=0;
    pflag=0;
    char password[20];
    strcpy(password,gtk_entry_get_text(GTK_ENTRY(data)));
    g_print("pass=%s",password);
    if(strcmp(password,"pass")){
        pflag=1;
    }
    flag=check_login();

}

int check_login() {
    g_print("%d%d",uflag,pflag);

    if(uflag==0 && pflag==0) {
        GtkWidget *window1;
        GtkBuilder *builder;
        GError *error=NULL;
            /* Create new GtkBuilder object */
            builder = gtk_builder_new();
            /* Load UI from file. If error occurs, report it and quit application.
             * Replace "tut.glade" with your saved project. */
            if( ! gtk_builder_add_from_file( builder, "login.glade", &error ) )
            {
                g_warning( "%s", error->message );
                g_free( error );
                return 1;
            }
            /* Get main window pointer from UI */
            window = GTK_WIDGET( gtk_builder_get_object( builder, "main_window" ) );

            /* Connect signals */
            gtk_builder_connect_signals( builder, NULL );

            /* Destroy builder, since we don't need it anymore */
            g_object_unref( G_OBJECT( builder ) );

            /* Show window. All other widgets are automatically shown by GtkBuilder */
            gtk_widget_show( window );

            /* Start main loop */
            gtk_main();
    }

    return 0;
}


int main(int argc,char **argv )
{
    GtkBuilder *builder;
    GtkWidget  *window;
    GError     *error = NULL;

    /* Init GTK+ */
    gtk_init( &argc, &argv );

    /* Create new GtkBuilder object */
    builder = gtk_builder_new();
    /* Load UI from file. If error occurs, report it and quit application.
     * Replace "tut.glade" with your saved project. */
    if( ! gtk_builder_add_from_file( builder, "new.glade", &error ) )
    {
        g_warning( "%s", error->message );
        g_free( error );
        return( 1 );
    }

    /* Get main window pointer from UI */
    window = GTK_WIDGET( gtk_builder_get_object( builder, "main_window" ) );

    /* Connect signals */
    gtk_builder_connect_signals( builder, NULL );

    /* Destroy builder, since we don't need it anymore */
    g_object_unref( G_OBJECT( builder ) );

    /* Show window. All other widgets are automatically shown by GtkBuilder */
    gtk_widget_show( window );

    /* Start main loop */
    gtk_main();

    return( 0 );
}
