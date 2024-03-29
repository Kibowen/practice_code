from flask import Flask

def create_app():
    app = Flask(__name__,)

    app.config['SECRET_KEY'] = 'tomato'


    from .views import views
    from .auth import auth


    # registration of blueprint.
    app.register_blueprint(views, url_prefix='/')
    app.register_blueprint(auth, url_prefix='/')

    
    return app
    