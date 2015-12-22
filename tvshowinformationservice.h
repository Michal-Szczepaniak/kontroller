#ifndef EU_TGCM_KONTROLLER_TVSHOWINFORMATIONSERVICE_H
#define EU_TGCM_KONTROLLER_TVSHOWINFORMATIONSERVICE_H

#include <QObject>
#include <vector>
#include <QQmlListProperty>


namespace eu
{
namespace tgcm
{
namespace kontroller
{

class File;

class TvShowInformationService : public QObject
{
    Q_OBJECT
    int tvshowId_;

    QString title_;
    QString thumbnail_;
    int year_;
    QStringList genres_;
    QString plot_;
    double rating_;
    int nbSeasons_;
    QString studio_;
    std::vector<QString> cast_;
    int nbEpisodes_;
    int nbWatchedEpisodes_;
    QString fanart_;
    QString file_;
    QString originalTitle_;
    QString dateAdded_;
    std::vector<QString> tags_;
    QString art_;
    std::vector<File*> seasons_;

public:
    explicit TvShowInformationService(QObject *parent = 0);
    Q_PROPERTY(int tvshowId READ tvshowId WRITE setTvshowId NOTIFY tvshowIdChanged)
    Q_PROPERTY(QString title READ title WRITE setTitle NOTIFY titleChanged)
    Q_PROPERTY(QString thumbnail READ thumbnail WRITE setThumbnail NOTIFY thumbnailChanged)
    Q_PROPERTY(int year READ year WRITE setYear NOTIFY yearChanged)
    Q_PROPERTY(QString plot READ plot WRITE setPlot NOTIFY plotChanged)
    Q_PROPERTY(double rating READ rating WRITE setRating NOTIFY ratingChanged)
    Q_PROPERTY(int nbSeasons READ nbSeasons WRITE setNbSeasons NOTIFY nbSeasonsChanged)
    Q_PROPERTY(QString studio READ studio WRITE setStudio NOTIFY studioChanged)
    Q_PROPERTY(int nbEpisodes READ nbEpisodes WRITE setNbEpisodes NOTIFY nbEpisodesChanged)
    Q_PROPERTY(int nbWatchedEpisodes READ nbWatchedEpisodes WRITE setNbWatchedEpisodes NOTIFY nbWatchedEpisodesChanged)
    Q_PROPERTY(QString fanart READ fanart WRITE setFanart NOTIFY fanartChanged)
    Q_PROPERTY(QString file READ file WRITE setFile NOTIFY fileChanged)
    Q_PROPERTY(QString originalTitle READ originalTitle WRITE setOriginalTitle NOTIFY originalTitleChanged)
    Q_PROPERTY(QString dateAdded READ dateAdded WRITE setDateAdded NOTIFY dateAddedChanged)
    Q_PROPERTY(QString art READ art WRITE setArt NOTIFY artChanged)
    Q_PROPERTY(QQmlListProperty<eu::tgcm::kontroller::File> seasons READ seasons NOTIFY seasonsChanged)
    Q_PROPERTY(QStringList genres READ genres NOTIFY genresChanged)

    int tvshowId() const;
    void setTvshowId(int tvshowId);

    QString title() const;
    void setTitle(const QString &title);

    int year() const;
    void setYear(int year);

    QString plot() const;
    void setPlot(const QString &plot);

    double rating() const;
    void setRating(double rating);

    int nbSeasons() const;
    void setNbSeasons(int nbSeasons);

    QString studio() const;
    void setStudio(const QString &studio);

    int nbEpisodes() const;
    void setNbEpisodes(int nbEpisodes);

    int nbWatchedEpisodes() const;
    void setNbWatchedEpisodes(int nbWatchedEpisodes);

    QString fanart() const;
    void setFanart(const QString &fanart);

    QString file() const;
    void setFile(const QString &file);

    QString originalTitle() const;
    void setOriginalTitle(const QString &originalTitle);

    QString dateAdded() const;
    void setDateAdded(const QString &dateAdded);

    QString art() const;
    void setArt(const QString &art);

    QString thumbnail() const;
    void setThumbnail(const QString &thumbnail);

    QQmlListProperty<File> seasons();
    QStringList genres();

signals:
    void thumbnailChanged();
    void tvshowIdChanged();
    void titleChanged();
    void yearChanged();
    void plotChanged();
    void ratingChanged();
    void nbSeasonsChanged();
    void studioChanged();
    void nbEpisodesChanged();
    void nbWatchedEpisodesChanged();
    void fanartChanged();
    void fileChanged();
    void originalTitleChanged();
    void dateAddedChanged();
    void artChanged();
    void seasonsChanged();
    void genresChanged();
public slots:
    void refresh();

private slots:
    void refreshSeasons_();
    void handleRefresh_();
    void handleSeasons_();
};

}
}
}

#endif // EU_TGCM_KONTROLLER_TVSHOWINFORMATIONSERVICE_H
